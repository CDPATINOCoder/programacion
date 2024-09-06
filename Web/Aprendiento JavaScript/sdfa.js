class Pelicula {
  constructor(datos) {


    if (!(this.validarDatos(datos))) {
      console.error(`Ocurrió un error al instanciar, los datos proporcionados no son validos`)
      return false;
    }

    this.id = datos.id
    this.titulo = datos.titulo
    this.director = datos.director
    this.fecha = datos.fecha 
    this.pais = datos.pais
    this.genero = datos.genero
    this.calificacion = datos.calificacion

    console.log("Objeto Instaciado Exitosamente")
  }

  static generosAceptados = ["action", "adult", "adventure", "animation", "biography", "comedy", "crime", "documentary" ,"drama", "family", "fantasy", "film noir", "game-show", "history", "horror", "musical", "music", "mystery", "news", "reality-tv", "romance", "sci-fi", "short", "sport", "talk-show", "thriller", "war", "western"]
  

  static retornarGenerosAceptados() {
    for (let generos of this.generosAceptados) {
      console.log(`Genero: ${generos}`)
    }
  }

  validarDatos(datos) {
    if (!(this.validarTipoDeDatoRecibido(datos))) return false;
    if (!(this.validarArray(datos))) return false;
    if (!(this.validarPropiedades(datos))) return false;
    if (!(this.validarDefinidos(datos))) return false;
    if (!(this.validarTipos(datos))) return false;
    if (!(this.validarId(datos.id))) return false;
    if (!(this.validarTitulo(datos.titulo))) return false;
    if (!(this.validarDirector(datos.director))) return false;
    if (!(this.validarFecha(datos.fecha))) return false;
    if (!(this.validarPais(datos.pais))) return false;
    if (!(this.validarGenero(datos.genero))) return false;
    if (!(this.validarCalificacion(datos.calificacion))) return false;
    return true
  }

  validarTipoDeDatoRecibido(datos) {
    if (Array.isArray(datos) || typeof datos === 'object') {
      console.log(`Dato aceptado`)
      return true;
    }
    else {
      console.error(`La ficha técnica de la Pelicula debe ser de tipo Array u Objeto`)
      return false;
    }
  }

  validarArray(datos) {
    if (Array.isArray(datos)) {
      if (datos.length === 0) {
        console.error("El arreglo debe de tener como minimo 1 objeto")
        return false;
      }
      if (datos.some(elemento => typeof elemento !== 'object')) {
        console.error("Los datos del arreglo deben ser de tipo objeto")
        return false;
      }
      for (let fichas of datos) {
        this.validarPropiedades(fichas)
        this.validarDefinidos(fichas)
        this.validarTipos(fichas)
        this.validarId(fichas.id)
        this.validarTitulo(fichas.titulo)
        this.validarDirector(fichas.director)
        this.validarFecha(fichas.fecha)
        this.validarPais(fichas.pais)
        this.validarGenero(fichas.genero)
        this.validarCalificacion(fichas.calificacion)
      }
    }
    return true;
  }

  validarPropiedades(datos) {
    let longitud = Object.keys(datos).length
    console.log(longitud)
    const propiedadesNecesarias = ['id', 'titulo', 'director', 'fecha', 'pais', 'genero', 'calificacion']
    if (longitud !== 7) {
      console.error(`Las propiedades necesarias son 7
        id:
        titulo:
        director:
        fecha:
        pais:
        genero:
        calificacion:`)
      return false
    }
    for (let propiedad of propiedadesNecesarias) {
      if (!(datos.hasOwnProperty(propiedad))) {
        console.error(`La propiedad ${propiedad} es necesario`)
        return false;
      }
    }
    return true;
  }

  validarDefinidos(datos) {
    for (let propiedad in datos) {
      if (datos[propiedad] === undefined || datos[propiedad] === null || datos[propiedad] === '') {
        console.error(`La propiedad ${propiedad} debe estar definida`)
        return false;
      }
    }
    return true;
  }
  
  validarTipos(datos) {
    const strings = ['id', 'titulo', 'director'],
    numbers = ['fecha', 'calificacion'],
    arrays = ['pais', 'genero']  
    for (let valor of strings) {
      if (typeof datos[valor] !== 'string') {
        console.error(`La propiedad ${valor} debe ser de tipo 'string'`)
        return false;
      }
    }
    for (let valor of numbers) {
      if (typeof datos[valor] !== 'number') {
        console.error(`La propiedad ${valor} debe ser de tipo 'number'`)
        return false;
      }
    }
    for (let valor of arrays) {
      if (!(datos[valor] instanceof Array)) {
        console.error(`La propiedad ${valor} debe ser de tipo 'array'`)
        return false;
      }
    }
    return true;
  }
  
  validarId(id) {
    let idExp = /^tt[0-9]{7}$/
    if (!(idExp.test(id))) {
      console.error("El formato del id debe de de ser 'tt[0-9], por ej: tt0000121'")
      return false;
    }
    return true;
  }

  validarTitulo(titulo) {
    if (titulo.length > 100) {
      console.error("El titulo excede los 100 caracteres")
      return false;
    }
    return true;
  }

  validarDirector(director) {
    if (director.length > 50) {
      console.error("El nombre del director rebasa los 50 caracteres")
      return false;
    }
    return true;
  }

  validarFecha(fecha) {
    let fechaExp = /^[0-9]{4}$/
    if (!(fechaExp.test(fecha))) {
      console.error("El formato del año debe ser de 4 digitos")
      return false;
    }
    if (fecha < 1985 || fecha > 2024) {
      console.error("El año ingresado debe ser entre 1985 y 2024")
      return false;
    }
    return true;
  }

  validarPais(pais) {
    if (pais.length < 1) {
      console.error("La propiedad Pais debe de tener al menos un dato")
      return false;
    }
    if (pais.some(elemento => typeof elemento !== 'string')) {
      console.error("Los datos de la propiedad Pais deben ser de tipo string")
      return false;
    }
    return true;
  }
  
  validarGenero(genero) {
    if (genero.length < 1) {
      console.error("La propiedad Genero debe tener al menos un dato")
      return false;
    }
    if (genero.some(elemento => typeof elemento !== 'string')) {
      console.error("Los datos de la propiedad Genero deben ser de tipo string")
      return false;
    }
    const generosLower = genero.map(genero => genero.toLowerCase())
    const generosInvalidos = generosLower.filter(genero => !(Pelicula.generosAceptados.includes(genero)))
    if (generosInvalidos.length > 0) {
      console.error("Estos generos no son validos:")
      for (let genero of generosInvalidos) {
        console.log(genero)
      }
      console.log("Generos Aceptados: ")
      Pelicula.retornarGenerosAceptados()
      return false;
    }
    return true;
  }

  validarCalificacion(calificacion) {
    const calificacionExp = /^(10|[0-9](\.[0-9])?)$/
    if (!(calificacionExp.test(calificacion))) {
      console.error("La calificacion debe ser del 0 al 10 y hasta un decimal luego de la coma")
      return false;
    }
    return true;
  }

  retornarInfo() {
    if (!this.id || !this.titulo || !this.director || !this.fecha || !this.pais || !this.genero || !this.calificacion) {
      return "Datos incompletos para la ficha técnica";
    }
    return console.log(`
      Ficha Técnica
      id = ${this.id}
      titulo = ${this.titulo}
      director = ${this.director}
      año = ${this.fecha}
      pais = ${this.pais.join(", ")}
      genero = ${this.genero.join(", ")}
      calificacion = ${this.calificacion}`)
  }

}


const datosPelicula = [{
  id: 'tt1234567',
  titulo: 'rain Man',
  director: 'nose', 
  fecha: 1990,
  pais: ['Estados Unidos'],
  genero: ['drama', 'action'],
  calificacion: 9.1
}]



const rainMan = new Pelicula(datosPelicula)

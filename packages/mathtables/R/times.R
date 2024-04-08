## calculate  x times y for integers

times <-
  function( x, y ) {
    res <- .times( as.integer( x ), as.integer( y ))
    dimnames(res) <-
      list( formatC( x, digits = 0, width = max( nchar( x ))),
            formatC( y, digits = 0, width = max( nchar( y ))))
    res
  }
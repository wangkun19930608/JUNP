using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(JNUPWF.Startup))]
namespace JNUPWF
{
    public partial class Startup {
        public void Configuration(IAppBuilder app) {
            ConfigureAuth(app);
        }
    }
}

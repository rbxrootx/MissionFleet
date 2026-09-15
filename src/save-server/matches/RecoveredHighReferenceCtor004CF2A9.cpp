// Exact recovered high-reference constructor.
extern "C" void Base004D6D80();
extern "C" int Vtable00634DD0;
extern "C" void Clear004658C0();
extern "C" __declspec(naked) void Recovered004CF2A9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov ecx, dword ptr [ebp-4]
    __asm call Base004D6D80
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax], offset Vtable00634DD0
    __asm push 32
    __asm push 0
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 28
    __asm push ecx
    __asm call Clear004658C0
    __asm add esp, 12
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [edx+28], eax
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}

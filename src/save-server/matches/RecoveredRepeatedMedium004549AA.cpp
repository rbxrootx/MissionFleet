extern "C" void Call00452B26();
extern "C" void Call00454A38();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered004549AA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xd4
    __asm mov dword ptr [ebp - 0xc], eax
    __asm push 7
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00454A38
    __asm mov dword ptr [ebp - 8], eax
    __asm cmp dword ptr [ebp - 8], 0
    __asm jge loc_004549DF
    __asm mov eax, dword ptr [ebp - 8]
    __asm jmp loc_00454A32
loc_004549DF:
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ecx + 0x88]
    __asm mov dword ptr [ebp - 4], edx
    __asm cmp dword ptr [ebp - 4], 0
    __asm jne loc_004549F5
    __asm xor eax, eax
    __asm jmp loc_00454A32
loc_004549F5:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 0x80
    __asm test eax, eax
    __asm je loc_00454A30
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 0x44]
    __asm mov dword ptr [ebp - 0x10], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0x44], 1
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00452B26
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [ecx + 0x44], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [edx + 0x10]
loc_00454A30:
    __asm xor eax, eax
loc_00454A32:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}

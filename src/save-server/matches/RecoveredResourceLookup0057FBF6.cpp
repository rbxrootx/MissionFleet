extern "C" void *ResourceAssertFile0067849C;
extern "C" void Recovered00528D40();
// Exact recovered resource-record lookup helper.
extern "C" __declspec(naked) void Recovered0057FBF6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
loc_0057FBFD:
    __asm mov eax, dword ptr [ebp + 8]
    __asm cmp dword ptr [eax + 8], 0
    __asm jne loc_0057FC1A
    __asm push 0xb1
    __asm push offset ResourceAssertFile0067849C
    __asm call Recovered00528D40
    __asm test eax, eax
    __asm je loc_0057FC1A
    __asm _emit 0cch
loc_0057FC1A:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne loc_0057FBFD
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx + 8]
    __asm cmp dword ptr [eax], -1
    __asm jne loc_0057FC5C
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov dword ptr [ebp - 4], edx
loc_0057FC34:
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0x18], -1
    __asm je loc_0057FC48
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 0x20
    __asm mov dword ptr [ebp - 4], ecx
    __asm jmp loc_0057FC34
loc_0057FC48:
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [ebp - 4]
    __asm sub eax, dword ptr [edx + 4]
    __asm sar eax, 5
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov dword ptr [edx], eax
loc_0057FC5C:
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 8]
    __asm cmp dword ptr [ecx], -1
    __asm jne loc_0057FC7B
    __asm push 0xbf
    __asm push offset ResourceAssertFile0067849C
    __asm call Recovered00528D40
    __asm test eax, eax
    __asm je loc_0057FC7B
    __asm _emit 0cch
loc_0057FC7B:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne loc_0057FC5C
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 8]
    __asm mov eax, dword ptr [ecx]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}

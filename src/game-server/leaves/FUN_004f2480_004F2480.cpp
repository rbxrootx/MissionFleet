// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2480 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_004f2480_004F2480() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 B5 96 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 00 00 00: call 0x4f24dc
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA5F0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_584aa5f0_584AA5F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FF 8B FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 D7 FD FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 D8 FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 EE FF FF: call 0x584a9450
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476E40 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00476e40_00476E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 9D 44 00 00: call 0x47b300
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [edx], 2dh
        sete al
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, eax
        xor edx, edx
        cmp dword ptr [ebp + 10h], 0
        setg dl
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 FE 5F 00 00: call 0x47ce90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 14 00 00 00: call 0x476ec0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}

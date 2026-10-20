// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869BF30 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_5869bf30_5869BF30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x5869bf58
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x5869bf56
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1E: jmp 0x5869bf76
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 02: jne 0x5869bf60
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 16: jmp 0x5869bf76
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x5869bf76
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 80 E3 FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588342A0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_588342a0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        sub esp, 0ch
        test ecx, ecx
        ; Exact mapped bytes 77 12: ja 0x588342bd
        __asm _emit 0x77
        __asm _emit 0x12
        xor ecx, ecx
        imul ecx, ecx, 54h
        push ecx
        ; Exact mapped bytes E8 98 89 14 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        add esp, 0ch
        ret
        or eax, 0ffffffffh
        xor edx, edx
        div ecx
        cmp eax, 54h
        ; Exact mapped bytes 73 E4: jae 0x588342ad
        __asm _emit 0x73
        __asm _emit 0xe4
        lea eax, [esp + 10h]
        push eax
        lea ecx, [esp + 4]
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes E8 81 89 14 00: call 0x5897cc60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x00
        push 589abd70h
        lea ecx, [esp + 4]
        push ecx
        mov dword ptr [esp + 8], 5898ca90h
        ; Exact mapped bytes E8 82 89 14 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

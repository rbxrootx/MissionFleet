// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB2F0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_587bb2f0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        sub esp, 0ch
        test ecx, ecx
        ; Exact mapped bytes 77 12: ja 0x587bb30d
        __asm _emit 0x77
        __asm _emit 0x12
        xor ecx, ecx
        lea edx, [ecx + ecx]
        push edx
        ; Exact mapped bytes E8 48 19 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x19
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        add esp, 0ch
        ret
        or eax, 0ffffffffh
        xor edx, edx
        div ecx
        cmp eax, 2
        ; Exact mapped bytes 73 E4: jae 0x587bb2fd
        __asm _emit 0x73
        __asm _emit 0xe4
        lea eax, [esp + 10h]
        push eax
        lea ecx, [esp + 4]
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes E8 31 19 1C 00: call 0x5897cc60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x19
        __asm _emit 0x1c
        __asm _emit 0x00
        push 589abd70h
        lea ecx, [esp + 4]
        push ecx
        mov dword ptr [esp + 8], 5898ca90h
        ; Exact mapped bytes E8 32 19 1C 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

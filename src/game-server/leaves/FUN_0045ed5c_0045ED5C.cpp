// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045ED5C .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0045ed5c_0045ED5C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2B: je 0x45edab
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 05 29 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FF 05 07 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 43 2B 0D 00: call 0x5318e2
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x45edab
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 B4 FE FF: call 0x44a20d
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 2B 9A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

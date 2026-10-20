// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045FF56 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0045ff56_0045FF56() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2B: je 0x45ffa5
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 0B 17 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 05 F4 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 15 19 0D 00: call 0x5318ae
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x19
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x45ffa5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 A2 FE FF: call 0x44a20d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 31 88 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x88
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

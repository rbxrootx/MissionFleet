// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B032 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0048b032_0048B032() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x48b060
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 53 8F F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2D: je 0x48b093
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 8F F7 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1C: je 0x48b093
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 8F F7 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x48b086
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x48b093
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 8F F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB DE: jmp 0x48b071
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 40 D7 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F8EF .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0043f8ef_0043F8EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 04 1A FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 50: je 0x43f975
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 46 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 75 20: jne 0x43f954
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ca4h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 12: jne 0x43f954
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 46 FC FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 05: jne 0x43f954
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 23: jmp 0x43f977
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 46 FC FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2710h
        ; Exact mapped bytes 76 02: jbe 0x43f973
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x43f975
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AA: jmp 0x43f91f
        __asm _emit 0xeb
        __asm _emit 0xaa
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5F 8E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

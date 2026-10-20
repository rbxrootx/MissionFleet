// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F577 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_0043f577_0043F577() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 5
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 6B: je 0x43f61c
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 4A FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 17: jne 0x43f5d7
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0d88h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 24: jmp 0x43f5fb
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 49 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 75 15: jne 0x43f5fb
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0cb0h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD 49 FC FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2710h
        ; Exact mapped bytes 76 02: jbe 0x43f61a
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x43f61c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8F: jmp 0x43f5ab
        __asm _emit 0xeb
        __asm _emit 0x8f
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 BA 91 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

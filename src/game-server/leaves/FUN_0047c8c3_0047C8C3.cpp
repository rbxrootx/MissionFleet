// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C8C3 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0047c8c3_0047C8C3() {
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
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 4D: je 0x47c93a
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x47c908
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 7D 29: jge 0x47c93a
        __asm _emit 0x7d
        __asm _emit 0x29
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 23: je 0x47c93a
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C8 E6 FC FF: call 0x44afe7
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x47c92d
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AB 9D FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C5: jmp 0x47c8ff
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov eax, dword ptr [ebp - 4]
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 BE 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

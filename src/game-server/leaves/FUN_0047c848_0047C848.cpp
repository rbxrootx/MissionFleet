// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C848 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0047c848_0047C848() {
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
        ; Exact mapped bytes 74 40: je 0x47c8b2
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x47c88d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 7D 1C: jge 0x47c8b2
        __asm _emit 0x7d
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 16: je 0x47c8b2
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 9E FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB D2: jmp 0x47c884
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 21 BF 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

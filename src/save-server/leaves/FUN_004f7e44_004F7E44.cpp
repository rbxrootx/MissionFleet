// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7E44 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_004f7e44_004F7E44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 F4 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 13: je 0x4f7e74
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 22 FF FF FF: call 0x4f7d94
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x4f7ec0
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 2E CF 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 158h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4f7eab
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 0B CF 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9A 3F FF FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x4f7ec0
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 14eh
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

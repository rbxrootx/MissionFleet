// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C8DF .. +0xCB bytes.
extern "C" __declspec(naked) void _DoModal_COleBusyDialog__UAEHXZ_0055C8DF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 B5 EC FC FF: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E7 A2 F9 FF: call 0x4f6be4
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 4D 39 F7 FF: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x39
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 14 78 F2 FF: call 0x484132
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x78
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 2B 3A F7 FF: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 31 F7 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x55c940
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 07: jne 0x55c94d
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 59: jmp 0x55c9a6
        __asm _emit 0xeb
        __asm _emit 0x59
        cmp dword ptr [ebp - 4], 75h
        ; Exact mapped bytes 75 0F: jne 0x55c962
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 1
        ; Exact mapped bytes EB 3F: jmp 0x55c9a1
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp dword ptr [ebp - 4], 76h
        ; Exact mapped bytes 75 0F: jne 0x55c977
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 2
        ; Exact mapped bytes EB 2A: jmp 0x55c9a1
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 4], 77h
        ; Exact mapped bytes 75 0F: jne 0x55c98c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 3
        ; Exact mapped bytes EB 15: jmp 0x55c9a1
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 FE FF FF: call 0x55c79c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], eax
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}

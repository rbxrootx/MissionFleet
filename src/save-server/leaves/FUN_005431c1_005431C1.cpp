// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005431C1 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_005431c1_005431C1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 15: je 0x5431e7
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 58 B9 68 00: call dword ptr [0x68b958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 7E 0D 00 00: call 0x543f70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x54321a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7A 06 00 00: call 0x54388c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB DB: jmp 0x5431f5
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 2E: je 0x543251
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 5C B9 68 00: call dword ptr [0x68b95c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 1ch
        push edx
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

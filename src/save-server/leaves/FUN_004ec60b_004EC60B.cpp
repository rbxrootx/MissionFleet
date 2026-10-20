// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC60B .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_004ec60b_004EC60B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dbfah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63905ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 0D: je 0x4ec64d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes FF 15 5C BC 68 00: call dword ptr [0x68bc5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 0D: je 0x4ec663
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 0D: je 0x4ec679
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes FF 15 5C BC 68 00: call dword ptr [0x68bc5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 0D: je 0x4ec68f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 30h]
        push eax
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 0D: je 0x4ec6a5
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes FF 15 5C BC 68 00: call dword ptr [0x68bc5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 0D: je 0x4ec6bb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 26 02 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 06 A7 FE FF: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

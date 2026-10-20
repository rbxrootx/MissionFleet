// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050764B .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_0050764b_0050764B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e15ah
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
        mov dword ptr [eax], 586a44h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 0D: je 0x50768d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 0D: je 0x5076a3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 0D: je 0x5076b9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 0D: je 0x5076cf
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 30h]
        push eax
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 0D: je 0x5076e5
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 0D: je 0x5076fb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 46 61 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 26 06 FF FF: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0xff
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

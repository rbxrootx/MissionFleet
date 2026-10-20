// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472490 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_00472490_00472490() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63f1c8h
        push 46d504h
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
        add esp, -20h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], -20h
        ; Exact mapped bytes 76 07: jbe 0x4724c0
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CC 01 00 00: jmp 0x47268c
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x472578
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 DC E3 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 29 09 00 00: call 0x472e10
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 30: je 0x472523
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 0D 84 89 68 00: cmp ecx, dword ptr [0x688984]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 77 1E: ja 0x472523
        __asm _emit 0x77
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 DA 17 00 00: call 0x473cf0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x472523
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x472531
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x47253c
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}

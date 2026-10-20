// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509CFD .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00509cfd_00509CFD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ece7h
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
        sub esp, 58h
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 4C EC FD FF: call 0x4e8973
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x509d64
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x509d64
        __asm _emit 0x74
        __asm _emit 0x12
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 C4 EC FD FF: call 0x4e8a37
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0xfd
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

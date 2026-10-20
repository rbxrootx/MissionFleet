// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525964 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00525964_00525964() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B9 01 FD FF: call 0x4f5b32
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x525982
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 59: jmp 0x5259db
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x5259a1
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD 09 FD FF: call 0x4f634c
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x5259db
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D CC E8 5D 00: mov ecx, dword ptr [0x5de8cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 BC E8 5D 00: mov edx, dword ptr [0x5de8bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 91 61 01 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 4B 0A FD FF: call 0x4f6413
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x5259d6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E BE FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x5259db
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes A1 BC E8 5D 00: mov eax, dword ptr [0x5de8bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

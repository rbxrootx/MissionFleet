// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523254 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_00523254_00523254() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d904h
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 C9 FC FF: call 0x4efba2
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 77 DC 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 584e54h
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8A CB FA FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcb
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5232bd
        __asm _emit 0x75
        __asm _emit 0x11
        push 4eh
        push 5c8174h
        ; Exact mapped bytes E8 48 17 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5232bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x52329d
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 01 00 00: call 0x5233fd
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

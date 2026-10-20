// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525B13 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00525b13_00525B13() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57da4ah
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
        ; Exact mapped bytes E8 59 D8 FF FF: call 0x523393
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8ch
        ; Exact mapped bytes E8 B8 B3 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 90h
        ; Exact mapped bytes E8 A6 B3 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 585020h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x525b88
        __asm _emit 0x75
        __asm _emit 0x14
        push 50dh
        push 5c8174h
        ; Exact mapped bytes E8 7D EE 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525b88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x525b6e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0F 02 00 00: call 0x525dbb
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x02
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

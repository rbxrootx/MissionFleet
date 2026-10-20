// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C959A .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004c959a_004C959A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d29ch
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 637734h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE FE FF FF: call 0x4c94bf
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4c95eb
        __asm _emit 0x74
        __asm _emit 0x11
        push 72h
        push 674970h
        ; Exact mapped bytes E8 5A F7 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c95eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4c95d1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 B1 05 00: call 0x5247a7
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
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
        ret
    }
}

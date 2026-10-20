// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434B9D .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00434b9d_00434B9D() {
    __asm {
        mov eax, 43b0dch
        ; Exact mapped bytes E8 61 AA FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ecx
        push esi
        push 10h
        ; Exact mapped bytes E8 3B 8D FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        mov dword ptr [ebp - 14h], esi
        and dword ptr [ebp - 4], 0
        test esi, esi
        ; Exact mapped bytes 74 2B: je 0x434bea
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, esi
        ; Exact mapped bytes E8 4A DB FF FF: call 0x432710
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        lea ecx, [esi + 0ch]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        mov byte ptr [ebp - 4], 2
        mov dword ptr [esi], 43f098h
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E8 4C 91 FF FF: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x434bec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        or dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 10h]
        push 445558h
        push eax
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 26 AA FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}

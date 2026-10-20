// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507D44 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_00507d44_00507D44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 60: je 0x507dc4
        __asm _emit 0x74
        __asm _emit 0x60
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        push 16eh
        push 5ca348h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D7 33 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        push 587bf8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA 32 FF FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x507dae
        __asm _emit 0x75
        __asm _emit 0x14
        push 16fh
        push 5ca348h
        ; Exact mapped bytes E8 57 CC 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507dae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x507d89
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 B4 00 00 00: call dword ptr [eax + 0xb4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9A: jmp 0x507d5e
        __asm _emit 0xeb
        __asm _emit 0x9a
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

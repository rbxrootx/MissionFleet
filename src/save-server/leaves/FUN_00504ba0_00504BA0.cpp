// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504BA0 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00504ba0_00504BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        push ebx
        push esi
        push edi
        push 100h
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 7F 51 FD FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x504bfd
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 677954h
        ; Exact mapped bytes E8 3D BA F9 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x504bf5
        __asm _emit 0x74
        __asm _emit 0x11
        push 22h
        push 677948h
        ; Exact mapped bytes E8 50 41 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504bf5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x504bdb
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 18: jmp 0x504c15
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 00 00 00: call 0x504c1e
        __asm _emit 0xe8
        __asm _emit 0x09
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

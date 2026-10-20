// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449FAB .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00449fab_00449FAB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x449fd4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 40: jge 0x44a01a
        __asm _emit 0x7d
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA 99 FB FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x44a018
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1eh
        ; Exact mapped bytes 76 07: jbe 0x44a018
        __asm _emit 0x76
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x44a01c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B1: jmp 0x449fcb
        __asm _emit 0xeb
        __asm _emit 0xb1
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 BA E7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

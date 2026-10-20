// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054175B .. +0x95 bytes.
extern "C" __declspec(naked) void __1CToolBar__UAE_XZ_0054175B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d74ch
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
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 6384bch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 80h
        push ecx
        ; Exact mapped bytes E8 0E A7 FA FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x5417c2
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5417c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 58h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7E D1 FB FF: call 0x4fe960
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd1
        __asm _emit 0xfb
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

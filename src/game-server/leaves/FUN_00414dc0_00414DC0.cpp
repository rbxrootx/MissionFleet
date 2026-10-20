// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414DC0 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00414dc0_00414DC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579afah
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
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 65 FA FE FF: call 0x404860
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], 5810bch
        push 14h
        push 5a0f54h
        push 1ch
        ; Exact mapped bytes E8 46 82 0D 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x414e35
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D0 44 0D 00: call 0x4e9300
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x414e3c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 144h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 70 39 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

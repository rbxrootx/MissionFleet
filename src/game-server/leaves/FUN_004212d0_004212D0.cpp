// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004212D0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_004212d0_004212D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58114ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 19ch], edx
        push 18h
        push 5a1454h
        push 13884h
        ; Exact mapped bytes E8 20 BD 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x421334
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 4e20h
        ; Exact mapped bytes 7D 28: jge 0x421365
        __asm _emit 0x7d
        __asm _emit 0x28
        ; Exact mapped bytes E8 BE 84 08 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes DB 45 EC: fild dword ptr [ebp - 0x14]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes D9 55 F8: fst dword ptr [ebp - 8]
        __asm _emit 0xd9
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes D8 35 48 11 58 00: fdiv dword ptr [0x581148]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D F8: fstp dword ptr [ebp - 8]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB C6: jmp 0x42132b
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 8], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9F 3F 00 00: call 0x425315
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 5D 74 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

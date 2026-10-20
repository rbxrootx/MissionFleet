// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827CA0 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_58827ca0_58827CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 8C B9 00 00 00: jl 0x58827d79
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x58827d79
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 8C A0 00 00 00: jl 0x58827d79
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x58827d79
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 09: jge 0x58827cf7
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 06: jmp 0x58827cfd
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 7C 0E: jl 0x58827d22
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 06: jmp 0x58827d28
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 18h], 100h
        ; Exact mapped bytes 75 39: jne 0x58827d79
        __asm _emit 0x75
        __asm _emit 0x39
        mov dword ptr [ebp - 84h], 64h
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 34h], edx
        lea eax, [ebp - 84h]
        push eax
        push 1000400h
        push 0
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CD 92 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

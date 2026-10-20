// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D8990 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_584d8990_584D8990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 53: jge 0x584d89f2
        __asm _emit 0x7d
        __asm _emit 0x53
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 E2 FA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4B 3E FF FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 D3 FA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4D: jmp 0x584d8a3f
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + eax + 3]
        push ecx
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB C0 FA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3C E2 FA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A2 D3 FA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D870 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_0047d870_0047D870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp + 14h]
        push eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 7D F8 FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x47d8f5
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 39: je 0x47d8dd
        __asm _emit 0x74
        __asm _emit 0x39
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 A4 04 00 00: call 0x47dd60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B 00 00 00: call 0x47d910
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 E1 AE 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

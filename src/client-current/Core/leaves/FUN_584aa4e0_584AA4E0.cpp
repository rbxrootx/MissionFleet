// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA4E0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_584aa4e0_584AA4E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 39 DA FD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 FF FF FF: call 0x584aa450
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x584aa534
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 DA FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 08 FF FF FF: call 0x584aa430
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D FF FF FF: call 0x584aa4c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 14h], 0fh
        mov byte ptr [ebp - 1], 0
        lea eax, [ebp - 1]
        push eax
        mov ecx, 1
        imul edx, ecx, 0
        add edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 7F 00 00 00: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}

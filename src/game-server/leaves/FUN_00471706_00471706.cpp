// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471706 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00471706_00471706() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1a4h]
        test ecx, ecx
        ; Exact mapped bytes 75 20: jne 0x471743
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 BD 6F FF FF: call 0x4686ef
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 72 77 FF FF: call 0x468eb5
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 184h], -1
        ; Exact mapped bytes 75 0F: jne 0x47175e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 2F 2C F9 FF: call 0x40438d
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 02 00 00: call 0x471a3b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 68 70 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

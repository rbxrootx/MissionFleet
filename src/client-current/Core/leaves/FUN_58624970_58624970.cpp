// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58624970 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58624970_58624970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 EB C2 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc2
        __asm _emit 0x19
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 5E 4D F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        sub eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7D 37: jge 0x586249d0
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 4C 4D F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 7E 27: jle 0x586249d0
        __asm _emit 0x7e
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 B3 C2 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc2
        __asm _emit 0x19
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 91 CD 19 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586249E0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_586249e0_586249E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 7C C2 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc2
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 37: jle 0x58624a2f
        __asm _emit 0x7e
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 ED 4C F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 7E 27: jle 0x58624a2f
        __asm _emit 0x7e
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 54 C2 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x19
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 CD 19 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

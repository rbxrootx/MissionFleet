// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4DA0 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_584e4da0_584E4DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 08 00 00: call 0x584e5660
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        push 52h
        push 13h
        push 71h
        push 7fh
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 09 00 00: call 0x584e5760
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 80 1E FA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EA 10 FA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0a4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 58h], ecx
        mov dword ptr [eax + 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 0F FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F A7 FB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 10 FA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

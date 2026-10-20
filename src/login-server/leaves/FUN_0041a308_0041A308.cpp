// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A308 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_0041a308_0041A308() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 90h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x41a33c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 88h]
        push 0
        push esi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        and dword ptr [esi + 90h], 0
        mov edi, dword ptr [esp + 18h]
        test edi, edi
        ; Exact mapped bytes 74 61: je 0x41a3a5
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [edi + 38h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 38h]
        push dword ptr [esp + 14h]
        mov dword ptr [esi + 90h], eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi + 94h], eax
        lea ecx, [esi + 9ch]
        movzx eax, word ptr [esp + 14h]
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 B8 39 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 1
        push esi
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov esi, dword ptr [esi + 90h]
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x41a3a5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

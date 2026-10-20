// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047FCA7 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0047fca7_0047FCA7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 CE A7 F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 A2 A7 F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020d0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 75 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 75 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 84 29 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 3C F8 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 3B F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8F 8A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

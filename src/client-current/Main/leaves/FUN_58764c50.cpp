// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764C50 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_58764c50() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 64h]
        push 5898d61ch
        ; Exact mapped bytes E8 FF A6 FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 5898d61ch
        ; Exact mapped bytes E8 F2 A6 FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        push 5898d61ch
        ; Exact mapped bytes E8 E5 A6 FF FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        push 0e8h
        xor edi, edi
        push 0fbh
        mov ecx, esi
        mov dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes E8 CC DD FF FF: call 0x58762a60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 82h
        add ecx, 0deh
        push eax
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 DE E5 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe5
        __asm _emit 0x19
        __asm _emit 0x00
        push edi
        push 2
        mov ecx, esi
        ; Exact mapped bytes E8 A4 DE FF FF: call 0x58762b60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 90h]
        push 1
        mov dword ptr [edx + 54h], edi
        mov ecx, dword ptr [esi + 90h]
        push edi
        ; Exact mapped bytes E8 4D 90 FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 90h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 94h]
        push 1
        mov dword ptr [edx + 54h], edi
        mov ecx, dword ptr [esi + 94h]
        push edi
        ; Exact mapped bytes E8 27 90 FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 94h]
        mov edx, dword ptr [esp + 0ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push edx
        mov ecx, esi
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 D6 F8 FF FF: call 0x587645f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977180 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_58977180() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        push eax
        push esi
        ; Exact mapped bytes E8 BE FB FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ch]
        lea ecx, [eax + eax*2 + 8]
        push ecx
        push esi
        ; Exact mapped bytes E8 10 FC FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20h]
        mov eax, 0ffffh
        add esp, 10h
        cmp ecx, eax
        ; Exact mapped bytes 7F 05: jg 0x589771b4
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp dword ptr [esi + 1ch], eax
        ; Exact mapped bytes 7E 16: jle 0x589771ca
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [esi]
        push esi
        mov dword ptr [edx + 14h], 29h
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 18h], eax
        mov edx, dword ptr [esi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, dword ptr [esi + 38h]
        push eax
        push esi
        ; Exact mapped bytes E8 9C FB FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20h]
        push ecx
        push esi
        ; Exact mapped bytes E8 D2 FB FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 1ch]
        push edx
        push esi
        ; Exact mapped bytes E8 C8 FB FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ch]
        push eax
        push esi
        ; Exact mapped bytes E8 7E FB FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esi + 44h]
        add esp, 20h
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 7E 33: jle 0x58977234
        __asm _emit 0x7e
        __asm _emit 0x33
        mov ecx, dword ptr [edi]
        push ecx
        push esi
        ; Exact mapped bytes E8 66 FB FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 0ch]
        shl edx, 4
        add edx, ecx
        push edx
        push esi
        ; Exact mapped bytes E8 54 FB FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 4A FB FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ch]
        add esp, 18h
        inc ebx
        add edi, 54h
        cmp ebx, eax
        ; Exact mapped bytes 7C CD: jl 0x58977201
        __asm _emit 0x7c
        __asm _emit 0xcd
        pop edi
        pop esi
        pop ebx
        ret
    }
}

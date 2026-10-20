// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556661 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00556661_00556661() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 60eh
        push 5cfa08h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E3 4A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 1E: jne 0x5566a1
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 FB FF FF: call 0x5561d4
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 88 FC FF FF: call 0x55631d
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 EE 8D FF FF: call 0x54f48f
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 2ch], eax
        push 61eh
        push 5cfa08h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 A0 4A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

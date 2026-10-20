// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564310 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_58564310_58564310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 130h]
        add ecx, 384h
        mov edx, dword ptr [ebp + 8]
        sub edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ach], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 7D 4B: jge 0x58564397
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        add edx, 0e10h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 7D 27: jge 0x58564397
        __asm _emit 0x7d
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 0fffffc7ch
        ; Exact mapped bytes 7E 18: jle 0x58564397
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        add ecx, 0e10h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 130h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E F2 FF FF: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC F2 FF FF: call 0x585636c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 F3 FF FF: call 0x58563750
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 F3 FF FF: call 0x58563750
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

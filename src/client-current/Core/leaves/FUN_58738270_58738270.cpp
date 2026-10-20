// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58738270 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_58738270_58738270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 40000000h
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 BE DC FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DC BD DC FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 BD DC FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F BD DC FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0bch]
        ; Exact mapped bytes E8 91 62 D9 FF: call 0x584ce5c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x62
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 83 62 D9 FF: call 0x584ce5c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x62
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

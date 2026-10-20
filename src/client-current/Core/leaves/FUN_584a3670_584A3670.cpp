// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3670 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_584a3670_584A3670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7F FB FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 47 FE FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 69 48 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 DF FF FF: call 0x584a1660
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}

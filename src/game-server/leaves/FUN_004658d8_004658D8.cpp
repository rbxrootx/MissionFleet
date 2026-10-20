// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004658D8 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_004658d8_004658D8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        cmp dword ptr [ecx + eax + 16be4h], 0
        ; Exact mapped bytes 75 75: jne 0x46597d
        __asm _emit 0x75
        __asm _emit 0x75
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [edx + ecx + 16be0h]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + ecx + 16be0h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 47 CD 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 16ch], 0ffffffffh
        ; Exact mapped bytes EB 25: jmp 0x4659a2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 13 CD 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 34 2E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
